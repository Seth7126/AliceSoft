// 函数: sub_56b250
// 地址: 0x56b250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2
void* ecx = arg4
void* ebp = esi
void* ebx = esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx - 1)
int32_t edx_2 = (eax_1 - edx) s>> 1

if (esi s< edx_2)
    do
        void* ecx_1 = (ebx << 1) + 2
        bool cond:0_1 = *(arg3 + (ecx_1 << 2)) s>= *(arg3 + (ebx << 3) + 4)
        ebx = ecx_1 - 1
        
        if (cond:0_1)
            ebx = ecx_1
        
        *(arg3 + (esi << 2)) = *(arg3 + (ebx << 2))
        esi = ebx
    while (ebx s< edx_2)
    
    ecx = arg4

if (ebx == edx_2 && (ecx.b & 1) == 0)
    *(arg3 + (esi << 2)) = *(arg3 + (ecx << 2) - 4)
    esi = ecx - 1

int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(esi - 1)
int32_t eax_9 = (eax_7 - edx_3) s>> 1

if (ebp s>= esi)
    int32_t eax_15 = *arg5
    *(arg3 + (esi << 2)) = eax_15
    return eax_15

do
    int32_t ecx_2 = *(arg3 + (eax_9 << 2))
    
    if (ecx_2 s>= *arg5)
        break
    
    *(arg3 + (esi << 2)) = ecx_2
    esi = eax_9
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q(eax_9 - 1)
    eax_9 = (eax_11 - edx_4) s>> 1
while (ebp s< esi)

int32_t eax_13 = *arg5
*(arg3 + (esi << 2)) = eax_13
return eax_13
