// 函数: sub_10011af0
// 地址: 0x10011af0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

long double x87_r7 = fconvert.t(arg2)
long double temp1 = fconvert.t(0.0)
x87_r7 - temp1
int32_t eax
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    return 0x80070057

int32_t eax_2 = sub_10011770(arg1, &arg1)

if (eax_2 s< 0)
    return eax_2

int32_t __saved_esi_2
int32_t __saved_esi_1 = __saved_esi_2
int32_t* esi = arg1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t eax_3 = (*(*esi + 0x44))(esi, fconvert.d(fconvert.t(arg2)))
double var_10_1
var_10_1:4.d = esi
(*(*esi + 8))()
return eax_3
