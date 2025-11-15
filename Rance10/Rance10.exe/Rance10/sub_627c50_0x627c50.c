// 函数: sub_627c50
// 地址: 0x627c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0)
    int32_t eax
    eax.b = 0
    return eax

for (uint32_t i = (*(*(arg1 + 0x20) + 8))() - 1; i s>= arg2; i -= 1)
    if (sub_627950(arg1, i).b == 0)
        goto label_627cb7

uint32_t dwBytes = *(arg1 + 0x18)
int32_t esi_2 = (*(arg1 + 0x3c) * arg2) << 2

if (esi_2 u< dwBytes)
label_627cd2:
    *(arg1 + 0x14) = esi_2
    dwBytes.b = 1
    return dwBytes

uint32_t dwBytes_1 = dwBytes
dwBytes += esi_2
*(arg1 + 0x18) = dwBytes

if (dwBytes_1 == neg.d(esi_2))
    goto label_627cd2

int32_t lpMem = *(arg1 + 0x10)

if (lpMem == 0)
    dwBytes = HeapAlloc(data_7fcbf4, HEAP_NONE, dwBytes)
else
    dwBytes = HeapReAlloc(data_7fcbf4, HEAP_NONE, lpMem, dwBytes)

*(arg1 + 0x10) = dwBytes

if (dwBytes != 0)
    goto label_627cd2

label_627cb7:
dwBytes.b = 0
return dwBytes
