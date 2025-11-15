// 函数: sub_5be000
// 地址: 0x5be000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_5be000(edi[2])
    void* ebx_1 = esi[5]
    edi = *edi
    
    if (ebx_1 != 0)
        sub_403160(ebx_1, (esi[7] - ebx_1) s/ 0x78, 0x78)
        esi[5] = 0
        esi[6] = 0
        esi[7] = 0
    
    sub_403160(esi, 1, 0x20)
    esi = edi
while (*(edi + 0xd) == 0)
