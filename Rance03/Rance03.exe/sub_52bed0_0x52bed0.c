// 函数: sub_52bed0
// 地址: 0x52bed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
void* ebp = edi
void* eax = (edi << 1) + 2
bool cond:0 = eax != arg4

while (eax s< arg4)
    if (*(arg3 + (eax << 2)) s< *(arg3 + (eax << 2) - 4))
        eax -= 1
    
    *(arg3 + (edi << 2)) = *(arg3 + (eax << 2))
    edi = eax
    eax = (eax << 1) + 2
    cond:0 = eax != arg4

if (not(cond:0))
    *(arg3 + (edi << 2)) = *(arg3 + (arg4 << 2) - 4)
    edi = arg4 - 1

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(edi - 1)
void* eax_5 = (eax_3 - edx_1) s>> 1

if (ebp s>= edi)
    int32_t eax_11 = *arg5
    *(arg3 + (edi << 2)) = eax_11
    return eax_11

do
    int32_t ecx_2 = *(arg3 + (eax_5 << 2))
    
    if (ecx_2 s>= *arg5)
        break
    
    *(arg3 + (edi << 2)) = ecx_2
    edi = eax_5
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(eax_5 - 1)
    eax_5 = (eax_7 - edx_2) s>> 1
while (ebp s< edi)

int32_t eax_9 = *arg5
*(arg3 + (edi << 2)) = eax_9
return eax_9
