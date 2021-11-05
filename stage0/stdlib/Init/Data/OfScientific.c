// Lean compiler output
// Module: Init.Data.OfScientific
// Imports: Init.Meta Init.Data.Float Init.Data.Nat
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Float_ofBinaryScientific___boxed(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l_instOfScientificFloat___closed__2;
lean_object* lean_nat_log2(lean_object*);
LEAN_EXPORT double lean_float_of_nat(lean_object*);
LEAN_EXPORT double l_Nat_toFloat(lean_object*);
static lean_object* l_instOfScientificFloat___closed__1;
double lean_uint64_to_float(uint64_t);
LEAN_EXPORT double l_instOfNatFloat(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOfScientificFloat___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT double l_Float_ofBinaryScientific(lean_object*, lean_object*);
double lean_float_scaleb(double, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Float_ofNat___boxed(lean_object*);
static lean_object* l_Float_ofNat___closed__1;
uint64_t lean_uint64_of_nat(lean_object*);
LEAN_EXPORT double l_instOfScientificFloat(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Float_ofInt___boxed(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_toFloat___boxed(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
double lean_float_negate(double);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_instOfNatFloat___boxed(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT double l_Float_ofInt(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT double l_Float_ofBinaryScientific(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; double x_10; double x_11; 
x_3 = lean_nat_log2(x_1);
x_4 = lean_unsigned_to_nat(63u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = lean_nat_shiftr(x_1, x_5);
x_7 = lean_uint64_of_nat(x_6);
lean_dec(x_6);
x_8 = lean_nat_to_int(x_5);
x_9 = lean_int_add(x_2, x_8);
lean_dec(x_8);
x_10 = lean_uint64_to_float(x_7);
x_11 = lean_float_scaleb(x_10, x_9);
lean_dec(x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Float_ofBinaryScientific___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = l_Float_ofBinaryScientific(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box_float(x_3);
return x_4;
}
}
static lean_object* _init_l_instOfScientificFloat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_instOfScientificFloat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instOfScientificFloat___closed__1;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
LEAN_EXPORT double l_instOfScientificFloat(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (x_2 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; double x_8; 
x_4 = lean_unsigned_to_nat(5u);
x_5 = lean_nat_pow(x_4, x_3);
x_6 = lean_nat_mul(x_1, x_5);
lean_dec(x_5);
x_7 = lean_nat_to_int(x_3);
x_8 = l_Float_ofBinaryScientific(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; double x_24; 
x_9 = lean_nat_log2(x_1);
x_10 = lean_unsigned_to_nat(64u);
x_11 = lean_nat_sub(x_10, x_9);
lean_dec(x_9);
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_nat_mul(x_12, x_3);
x_14 = lean_nat_add(x_13, x_11);
lean_dec(x_13);
x_15 = lean_nat_shiftl(x_1, x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(5u);
x_17 = lean_nat_pow(x_16, x_3);
x_18 = lean_nat_div(x_15, x_17);
lean_dec(x_17);
lean_dec(x_15);
x_19 = lean_nat_to_int(x_3);
x_20 = l_instOfScientificFloat___closed__2;
x_21 = lean_int_mul(x_20, x_19);
lean_dec(x_19);
x_22 = lean_nat_to_int(x_11);
x_23 = lean_int_sub(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
x_24 = l_Float_ofBinaryScientific(x_18, x_23);
lean_dec(x_23);
lean_dec(x_18);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_instOfScientificFloat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; double x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instOfScientificFloat(x_1, x_4, x_3);
lean_dec(x_1);
x_6 = lean_box_float(x_5);
return x_6;
}
}
static lean_object* _init_l_Float_ofNat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT double lean_float_of_nat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; double x_5; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_mul(x_1, x_2);
lean_dec(x_1);
x_4 = l_Float_ofNat___closed__1;
x_5 = l_Float_ofBinaryScientific(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Float_ofNat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_float_of_nat(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT double l_Float_ofInt(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Float_ofNat___closed__1;
x_3 = lean_int_dec_lt(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; double x_5; 
x_4 = lean_nat_abs(x_1);
x_5 = lean_float_of_nat(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; double x_10; double x_11; 
x_6 = lean_nat_abs(x_1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_6, x_7);
lean_dec(x_6);
x_9 = lean_nat_add(x_8, x_7);
lean_dec(x_8);
x_10 = lean_float_of_nat(x_9);
x_11 = lean_float_negate(x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Float_ofInt___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_Float_ofInt(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT double l_instOfNatFloat(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instOfNatFloat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_instOfNatFloat(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT double l_Nat_toFloat(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_toFloat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_Nat_toFloat(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
lean_object* initialize_Init_Meta(lean_object*);
lean_object* initialize_Init_Data_Float(lean_object*);
lean_object* initialize_Init_Data_Nat(lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_OfScientific(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Float(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instOfScientificFloat___closed__1 = _init_l_instOfScientificFloat___closed__1();
lean_mark_persistent(l_instOfScientificFloat___closed__1);
l_instOfScientificFloat___closed__2 = _init_l_instOfScientificFloat___closed__2();
lean_mark_persistent(l_instOfScientificFloat___closed__2);
l_Float_ofNat___closed__1 = _init_l_Float_ofNat___closed__1();
lean_mark_persistent(l_Float_ofNat___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif