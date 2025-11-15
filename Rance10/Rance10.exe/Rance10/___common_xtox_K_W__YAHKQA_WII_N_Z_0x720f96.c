// 函数: ??$common_xtox@K_W@@YAHKQA_WII_N@Z
// 地址: 0x720f96
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1
int32_t ebx = 0
void* esi = arg2
int32_t edi
int32_t var_10 = edi

if (arg5 != 0)
    ebx = 1
    *arg2 = 0x2d
    esi = &arg2[1]
    ecx = neg.d(ecx)

void* edi_1 = esi

do
    int32_t edx_1 = 0
    uint32_t temp1_1 = modu.dp.d(edx_1:ecx, arg4)
    ecx = divu.dp.d(edx_1:ecx, arg4)
    int16_t eax_3 = temp1_1.w + 0x57
    
    if (temp1_1 u<= 9)
        eax_3 = temp1_1.w + 0x30
    
    *esi = eax_3
    esi += 2
    ebx += 1
    
    if (ecx == 0)
        break
while (ebx u< arg3)

if (ebx u>= arg3)
    *arg2 = 0
    *__errno() = 0x22
    __invalid_parameter_noinfo()
    return 0x22

*esi = 0
void* esi_1 = esi - 2

do
    int16_t ecx_1 = *esi_1
    *esi_1 = *edi_1
    esi_1 -= 2
    *edi_1 = ecx_1
    edi_1 += 2
while (edi_1 u< esi_1)

return 0
