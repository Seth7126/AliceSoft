// 函数: sub_506b50
// 地址: 0x506b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* ebx = *(arg1 + 4)

if (ebx == 0)
    int32_t eax
    eax.b = 1
    return eax

int32_t edx = arg3
int32_t* eax_1 = &arg4
int32_t esi_1 = arg4 + arg2
bool cond:0 = esi_1 s>= arg2
arg4 = esi_1

if (cond:0)
    eax_1 = &arg2

int32_t ecx_2 = arg5 + edx
int32_t eax_2 = *eax_1
int32_t* eax_3 = &arg4

if (ecx_2 s>= edx)
    eax_3 = &arg3

arg4 = ecx_2
bool cond:2 = arg2 s>= esi_1
int32_t ebp = *eax_3
int32_t* eax_4 = &arg4
arg4 = esi_1

if (cond:2)
    eax_4 = &arg2

int32_t esi_2 = *eax_4
int32_t* eax_5 = &arg2

if (edx s>= ecx_2)
    eax_5 = &arg3

arg2 = ecx_2
int32_t eax_6 = *eax_5

if (eax_2 s>= 0 && ebp s>= 0 && esi_2 s<= *(ebx + 0x18) && eax_6 s<= *(ebx + 0x1c)
        && eax_2 != esi_2)
    eax_6.b = ebp == eax_6
    return eax_6

eax_6.b = 1
return eax_6
