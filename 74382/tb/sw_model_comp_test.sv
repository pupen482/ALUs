import alu_74382_pkg::*;
import tb_env_pkg::*;

task sw_model_comp_test();

t_tst_vector test_vector;

begin
    $display(">>>> Software model comparison test start...");

    test_vector = get_test_vector();

    sel = OP_ADD;
    for (int i = 0; i < TEST_VECTOR_SIZE; i++) begin

        inputs.carry_in = test_vector.carry_in[i];
        inputs.port_a   = test_vector.port_a[i];
        inputs.port_b   = test_vector.port_b[i];

        #1;

        if ({test_vector.carry_out[i], test_vector.result[i]} == {outputs.carry_out, outputs.result}) begin
            $display("Vector[%d] - [OK]", i);
        end else begin
            err_cnt++;
            $display("Vector[%d] - [FAIL]", i);
            $display("inputs    | port_a:%b, port_b: %b, carry_in: %b", inputs.port_a,
                                                                        inputs.port_b, 
                                                                        inputs.carry_in);
            $display("result    | expected: %b, actual: %b", test_vector.result[i],    outputs.result);
            $display("carry_out | expected: %b, actual: %b", test_vector.carry_out[i], outputs.carry_out);
            // $display("overflow  | expected: %b, actual: %b", test_vector[i].overflow,  outputs.overflow);
        end
    end
end
endtask : sw_model_comp_test