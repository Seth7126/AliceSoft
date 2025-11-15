// 函数: sub_477360
// 地址: 0x477360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = data_7fcc74
int32_t edi = data_7fcc78

if (esi == edi)
    data_7fcc78 = esi
    return 

do
    int32_t* ecx_1 = *esi
    
    if (ecx_1 != 0)
        int32_t ebx_1 = ecx_1[1]
        ecx_1[1] -= 1
        (**ecx_1)(ebx_1 - 1)
    
    esi = &esi[1]
while (esi != edi)

data_7fcc78 = data_7fcc74
