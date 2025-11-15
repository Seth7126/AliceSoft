// 函数: sub_64ab80
// 地址: 0x64ab80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[5]

if (eax == 0x65 || eax == 0x66)
    if (arg1[0x3e] u< arg1[8])
        *(*arg1 + 0x14) = 0x45
        (**arg1)(arg1)
    
    (*(arg1[0x5e] + 8))(arg1)
else if (eax != 0x67)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

while (*(arg1[0x5e] + 0xd) == 0)
    (*arg1[0x5e])(arg1)
    int32_t i = 0
    
    if (arg1[0x44] u> 0)
        do
            void* eax_13 = arg1[2]
            
            if (eax_13 != 0)
                *(eax_13 + 4) = i
                *(arg1[2] + 8) = arg1[0x44]
                (*arg1[2])(arg1)
            
            if ((*(arg1[0x61] + 4))(arg1, 0) == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            i += 1
        while (i u< arg1[0x44])
    
    (*(arg1[0x5e] + 8))(arg1)

(*(arg1[0x62] + 0xc))(arg1)
(*(arg1[6] + 0x10))(arg1)
void* result = arg1[1]

if (result != 0)
    result = (*(result + 0x24))(arg1, 1)
    
    if (arg1[4].b != 0)
        arg1[5] = 0xc8
        arg1[0x45] = 0
        return result
    
    arg1[5] = 0x64

return result
