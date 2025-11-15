// 函数: sub_5c0420
// 地址: 0x5c0420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* arg_8

for (int32_t* i = arg2; i != arg4; i = &i[1])
    sub_5c04e0(&arg_8, i)

int32_t* esi = arg_8
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = arg6

if (esi != 0)
    int32_t eax_1 = arg5
    
    if (esi != eax_1)
        do
            int32_t* edi_1 = *esi
            
            if (edi_1 != 0)
                sub_5bd030(edi_1)
                int32_t var_10_2 = 0x80
                operator new(edi_1)
                eax_1 = arg5
            
            esi = &esi[1]
        while (esi != eax_1)
        
        esi = arg_8
    
    _free(esi)

return arg3
