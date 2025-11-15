// 函数: sub_643600
// 地址: 0x643600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2
int32_t ecx = arg4
int32_t var_4 = ebx
void* edi = ebx
int32_t esi = ecx - 1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_c = eax_3

if (ebx s< eax_3)
    do
        void* eax_4 = *(arg3 + (edi << 3) + 4)
        void* esi_1 = (edi << 1) + 2
        edi = esi_1 - 1
        
        if (*(*(*(arg3 + (esi_1 << 2)) + 0x60) + 8) s<= *(*(eax_4 + 0x60) + 8))
            edi = esi_1
        
        *(arg3 + (ebx << 2)) = *(arg3 + (edi << 2))
        ebx = edi
        eax_3 = var_c
    while (edi s< eax_3)
    
    ecx = arg4

if (edi == eax_3 && (ecx.b & 1) == 0)
    eax_3 = *(arg3 + (ecx << 2) - 4)
    *(arg3 + (ebx << 2)) = eax_3
    ebx = esi

int32_t var_20 = ecx
return sub_643780(eax_3, ebx, arg3, var_4, arg5)
