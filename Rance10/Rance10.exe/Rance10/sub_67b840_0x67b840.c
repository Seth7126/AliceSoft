// 函数: sub_67b840
// 地址: 0x67b840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x1c0)
int32_t edx = 0
int32_t i = 0
void* edi = (**(arg1 + 4))(arg1, 1, 0x7fc) + 0x3fc
int32_t result = 0
*(esi + 0x28) = edi
void* esi_1 = edi

do
    *(edi + (i << 2)) = edx
    esi_1 -= 4
    *(esi_1 + 4) = result
    i += 1
    edx += 1
    result -= 1
while (i s< 0x10)

if (i s< 0x30)
    void* esi_3 = edi - (i << 2)
    
    do
        *(edi + (i << 2)) = edx
        esi_3 -= 4
        *(esi_3 + 4) = neg.d(edx)
        i += 1
        result = not.d(i) & 1
        edx += result
    while (i s< 0x30)

if (i s<= 0xff)
    result = i << 2
    void* esi_5 = edi - result
    
    do
        *(edi + (i << 2)) = edx
        esi_5 -= 4
        i += 1
        *(esi_5 + 4) = neg.d(edx)
    while (i s<= 0xff)

return result
