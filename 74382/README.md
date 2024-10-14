# How to run tests

1. Go to `74382/tb` folder.
2. Run `g++ sw_test_vectors_gen.cpp -o generate`. This will create execution file (for software model comparison test)
3. Go to `74382 ` folder.
4. Run `make -f second_alu.mk`. There are several options available to pass into make run:
   - `test_name=<test name>` - will choose desired test. By default is DATASHEET_VECTORS_TEST.
   - `sw_tst_op=<operation>` - will choose desired operation for software comparison test. By default is 'a+b'.
   - `vsize=<vector size>` - will choose desired test vector size for software comparison test. By default is 100.

Available tests (pass into test_name):

- DATASHEET_VECTORS_TEST - non-randomized test with test vectors from 74382 IC datasheet table.
- DUMMY_OVF_TEST - non-randomized test to check overflow signal correctness.
- SW_MODEL_COMP_TEST - randomized test with test vectors from software c++ model.

Available operations for SW_MODEL_COMP_TEST:

- a+b
- a-b
- b-a