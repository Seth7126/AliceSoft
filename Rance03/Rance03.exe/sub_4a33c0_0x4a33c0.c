// 函数: sub_4a33c0
// 地址: 0x4a33c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc5d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ebx
int32_t* var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t eax_2 = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = arg3
int32_t var_44 = arg2
sub_4a3520(arg1)

if (*(arg1 + 0x8d) != 0 && *(arg1 + 0x38) != arg4.b)
    *(arg1 + 0x38) = arg4.b
    *(arg1 + 0x70) = 1

int32_t eax_4 = sub_4a4170(arg1, *(arg1 + 0xe0))
int32_t eax_5 = sub_4a4170(arg1, *(arg1 + 0xe4))

if (*(arg1 + 0x3c) != eax_4 || *(arg1 + 0x40) != eax_5)
    *(arg1 + 0x70) = 1

int32_t var_40_3 = *(arg1 + 0xe8)
*(arg1 + 0x3c) = eax_4
*(arg1 + 0x40) = eax_5
int32_t eax_6
float xmm0
eax_6, xmm0 = sub_4a4200(arg1, var_40_3)
float xmm1 = *(arg1 + 0x44)
xmm1 - xmm0
eax_6:1.b =
    (xmm1 == xmm0 ? 1 : 0) << 6 | (is_unordered.d(xmm1, xmm0) ? 1 : 0) << 2 | (xmm1 < xmm0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    *(arg1 + 0x70) = 1

*(arg1 + 0x44) = xmm0
char eax_7 = sub_4a42a0(arg1)

if (*(arg1 + 0x48) == 0 && eax_7 != 0)
    *(arg1 + 0x70) = 1

int32_t* ecx_5 = *(arg1 + 0x5c)
*(arg1 + 0x48) = eax_7
(*(*ecx_5 + 0x10))(arg2, arg3, arg4, eax_2)
var_30 = nullptr
int32_t var_2c = 0
int32_t var_28_1 = 0
int32_t var_18 = 0
int32_t result = sub_4a6a50(arg1 + 0x4c, &var_30)
int32_t* edx = var_30
int32_t edi_2 = 0
int32_t* esi_2 = edx
uint32_t ecx_10 = (var_2c - edx + 3) u>> 2

if (edx u> var_2c)
    ecx_10 = 0

if (ecx_10 != 0)
    do
        *esi_2
        result = sub_4a33c0(arg2, arg3, arg4)
        edi_2 += 1
        esi_2 = &esi_2[1]
    while (edi_2 != ecx_10)
    
    edx = var_30

if (edx != 0)
    result = j__free(edx)

int32_t var_20
fsbase->NtTib.ExceptionList = var_20
return result
