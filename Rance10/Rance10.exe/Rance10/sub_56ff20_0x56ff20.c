// 函数: sub_56ff20
// 地址: 0x56ff20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_56ff20(edi[2])
    void* ecx_1 = esi[5]
    edi = *edi
    
    if (ecx_1 != 0)
        sub_403160(ecx_1, (esi[7] - ecx_1) s>> 2, 4)
        esi[5] = 0
        esi[6] = 0
        esi[7] = 0
    
    sub_403160(esi, 1, 0x24)
    esi = edi
while (*(edi + 0xd) == 0)
