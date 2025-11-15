// 函数: sub_4b39f0
// 地址: 0x4b39f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* arg_8
int32_t* esi = &arg_8

if (arg2 s>= *(arg1 + 0xfc))
    esi = arg1 + 0xfc

int32_t* ecx = arg1 + 0xf4
int32_t eax_1 = *ecx
void* edi = arg_8
arg_8 = arg2
int32_t* edx_1 = &var_4
bool cond:1 = eax_1 s< *esi
var_4 = edi

if (cond:1)
    ecx = esi

if (edi s>= *(arg1 + 0x100))
    edx_1 = arg1 + 0x100

int32_t esi_1 = *ecx
int32_t* ecx_1 = arg1 + 0xf8

if (*(arg1 + 0xf8) s< *edx_1)
    ecx_1 = edx_1

int32_t result = *ecx_1

if (*(arg1 + 0xe8) != esi_1 || *(arg1 + 0xec) != result)
    *(arg1 + 0xe8) = esi_1
    *(arg1 + 0xec) = result
    *(arg1 + 0x156) = 1

return result
