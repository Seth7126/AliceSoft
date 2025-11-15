// 函数: sub_4913c0
// 地址: 0x4913c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3
void** edx = &edi[2]
int32_t ebx = edx[4]

if (edi[7] u>= 0x10)
    edx = *edx

int32_t ecx = 0
int32_t esi = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t eax_1 = zx.d(*(edx + ecx))
        ecx += 1
        esi = (eax_1 ^ esi) * 0x1000193
    while (ecx u< ebx)

int32_t edx_1 = (*(arg1 + 0x18) & esi) << 3
int32_t* ecx_2 = *(arg1 + 0xc) + edx_1

if (ecx_2[1] == edi)
    if (*ecx_2 != edi)
        ecx_2[1] = edi[1]
    else
        *ecx_2 = *(arg1 + 4)
        *(*(arg1 + 0xc) + edx_1 + 4) = *(arg1 + 4)
    
    edi = arg3
else if (*ecx_2 == edi)
    *ecx_2 = *edi
    edi = arg3

int32_t esi_1 = *edi
*edi[1] = esi_1
*(*edi + 4) = edi[1]
*(arg1 + 8) -= 1
Concurrency::details::UMSSchedulerProxy::~UMSSchedulerProxy(&edi[2])
sub_403160(edi, 1, 0x48)
*arg2 = esi_1
return arg2
