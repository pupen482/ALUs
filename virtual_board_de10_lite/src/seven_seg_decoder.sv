module seven_seg_decoder #(
    parameter logic ACTIVE_LOW = 1'b1  // Параметр для выбора активного уровня: 1 для активного низкого, 0 для активного высокого
) (
    input logic [3:0] hex,          // Входная шестнадцатеричная цифра 
    input logic leading_zero,       // Флаг ведущего нуля
    input logic dot,                // Управление точкой 
    output logic [7:0] segments     // Выходной вектор для управления сегментами и точкой
);
    always_comb begin
        logic [6:0] seg_pattern;
        
        if (leading_zero && (hex == 4'h0)) begin 
            seg_pattern = 7'b0000000;  // Отключаем сегменты для ведущего нуля
        end else begin
            case (hex)
                4'h0: seg_pattern = 7'b1111110; // 0 
                4'h1: seg_pattern = 7'b0110000; // 1 
                4'h2: seg_pattern = 7'b1101101; // 2 
                4'h3: seg_pattern = 7'b1111001; // 3 
                4'h4: seg_pattern = 7'b0110011; // 4 
                4'h5: seg_pattern = 7'b1011011; // 5 
                4'h6: seg_pattern = 7'b1011111; // 6 
                4'h7: seg_pattern = 7'b1110000; // 7 
                4'h8: seg_pattern = 7'b1111111; // 8 
                4'h9: seg_pattern = 7'b1111011; // 9 
                4'hA: seg_pattern = 7'b1110111; // A 
                4'hB: seg_pattern = 7'b0011111; // B
                4'hC: seg_pattern = 7'b1001110; // C
                4'hD: seg_pattern = 7'b0111101; // D
                4'hE: seg_pattern = 7'b1001111; // E
                4'hF: seg_pattern = 7'b1000111; // F
                default: seg_pattern = 7'b0000000; // Погашенные сегменты
            endcase end

        segments[6:0] = ACTIVE_LOW ? seg_pattern : ~seg_pattern;
        segments[7] = ACTIVE_LOW ? dot : ~dot;  // Управление точкой
    end
endmodule
