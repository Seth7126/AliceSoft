// 函数: sub_639a00
// 地址: 0x639a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg4
int32_t* ebx = *esi

if (ebx == 0)
label_639a2c:
    int32_t* eax_2 = sub_6e810c(0x14)
    arg4 = eax_2
    *eax_2 = arg3
    eax_2[1] = 0
    eax_2[2] = 0
    eax_2[3] = 0
    *esi = eax_2
    eax_2[4] = ebx
else
    int32_t* eax_1
    
    do
        eax_1 = *esi
        
        if (arg3 u>= *eax_1)
            break
        
        esi = &eax_1[4]
    while (eax_1[4] != 0)
    ebx = *esi
    
    if (ebx == 0 || arg3 != *ebx)
        goto label_639a2c

return sub_639b90(*esi + 4, arg1, arg2)
