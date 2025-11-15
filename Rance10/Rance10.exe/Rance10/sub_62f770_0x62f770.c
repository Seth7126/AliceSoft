// 函数: sub_62f770
// 地址: 0x62f770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg4
int32_t var_4 = 0

if (ebp s< 0)
    ebp = 0

int32_t ecx = 0
int32_t* var_8 = arg3

if (arg5 s> 0)
    ecx = arg5

char* eax_2 = (**arg2)()
char* edx = nullptr
char* ebx = nullptr
int32_t edi = 0
char i = *eax_2

if (i == 0)
label_62f811:
    arg3[5] = 0xf
    arg3[4] = 0
    *arg3 = 0
else
    do
        if (edi == ebp)
            edx = eax_2
        
        if (edi == ecx + ebp)
            ebx = eax_2
            break
        
        if (i u< 0x81)
            if (i + 0x20 u<= 0xf)
                eax_2 = &eax_2[1]
        else if (i u<= 0x9f || i + 0x20 u<= 0xf)
            eax_2 = &eax_2[1]
        
        i = eax_2[1]
        eax_2 = &eax_2[1]
        edi += 1
    while (i != 0)
    
    if (edx == 0)
        goto label_62f811
    
    arg3[5] = 0xf
    arg3[4] = 0
    
    if (ebx == 0)
        ebx = eax_2
    
    *arg3 = 0
    
    if (edx u< ebx)
        sub_403490(arg3, edx, ebx - edx)

return arg3
