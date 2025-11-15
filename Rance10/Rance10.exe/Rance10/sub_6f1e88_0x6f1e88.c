// 函数: sub_6f1e88
// 地址: 0x6f1e88
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
int32_t eax_1

if (eax != 0 && *(eax + 0x4c) == 0)
    eax_1 = sub_4866a0(eax)

int32_t ebx

if (eax == 0 || *(eax + 0x4c) != 0 || eax_1 != arg1)
    ebx.b = 1
    arg1[0x62] += 1
else
    ebx.b = 0

Concurrency::details::SchedulerBase::CommitToVersion(arg1, 0)
int32_t esi = *(*arg1 + 0x54)
j_sub_4033e0()
esi()
int32_t eax_3 = arg1[0x65]
int32_t edx_2

do
    edx_2 = eax_3
    
    if (eax_3 == arg1[0x65])
        arg1[0x65] = (eax_3 & 0xbfffffff) | 0x20000000
    else
        eax_3 = arg1[0x65]
while (eax_3 != edx_2)
Concurrency::details::SchedulerBase::ReleaseSuspendedVirtualProcessors(arg1, eax_3 & 0x1fffffff)
int32_t esi_2 = *(*arg1 + 0x50)
j_sub_4033e0()
int32_t result = esi_2()

if (ebx.b == 0)
    return result

return sub_6f083c(arg1) __tailcall
