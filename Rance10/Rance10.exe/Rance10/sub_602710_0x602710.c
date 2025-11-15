// 函数: sub_602710
// 地址: 0x602710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t* edi = *arg1
int32_t* ebp = edi
int32_t* eax_1 = arg1[3]
int32_t* var_8 = ebp
int32_t var_4 = 0
int32_t* var_14 = eax_1
int32_t edx

if (eax_1 != 0)
    edx = sub_602850(&var_8, ((arg3 - edi) s>> 2 << 5) + arg4)
    ebx = var_4
    ebp = var_8
    eax_1 = var_14

int32_t ecx_2 = 0
var_8 = edi
int32_t var_4_1 = 0

if (eax_1 != 0)
    edx = sub_602850(&var_8, ((arg5 - edi) s>> 2 << 5) + arg6)
    eax_1 = var_14
    ecx_2 = var_4_1

int32_t esi_4 = ((ebp - edi) s>> 2 << 5) + ebx
int32_t* edi_1

if (ebp != var_8 || ebx != ecx_2)
    int32_t* ecx_3 = nullptr
    var_14 = edi
    int32_t* var_10_1 = nullptr
    
    if (eax_1 != 0)
        eax_1, edx = sub_602850(&var_14, eax_1)
        ecx_3 = var_10_1
        edi = var_14
    
    int32_t var_2c_4 = ebx
    var_14.b = 0
    sub_602b50(eax_1, edx, &var_8, var_14, var_8, var_4_1, edi, ecx_3, ebp)
    edi_1 = arg1
    sub_6028a0(edi_1, ((var_8 - *edi_1) s>> 2 << 5) + var_4_1)
else
    edi_1 = arg1

int32_t edx_1 = *edi_1
arg4 = 0
int32_t edx_2

if (esi_4 s>= 0 || neg.d(esi_4) == 0)
    edx_2 = edx_1 + (esi_4 u>> 5 << 2)
else
    edx_2 = edx_1 + 0xfffffffc - ((0xffffffff - esi_4) u>> 5 << 2)

arg2[1] = esi_4 & 0x1f
*arg2 = edx_2
return arg2
