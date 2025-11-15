// 函数: sub_4bca00
// 地址: 0x4bca00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
*arg1 = &partsengine::CSurfacePackList::`vftable'
int32_t* esi = arg1[2]
uint32_t ebx_3 = (arg1[3] - esi + 3) u>> 2

if (esi u> arg1[3])
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (**ecx)(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

void* ecx_1 = arg1[2]

if (ecx_1 == 0)
    return 

sub_403160(ecx_1, (arg1[4] - ecx_1) s>> 2, 4)
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
