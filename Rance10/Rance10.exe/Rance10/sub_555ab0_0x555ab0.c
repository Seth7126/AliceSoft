// 函数: sub_555ab0
// 地址: 0x555ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg2 - arg3
int32_t* esi = arg4
void* i_1 = edx - 4

if (edx u>= 4)
    void* i
    
    do
        if (*arg3 != *esi)
            goto label_555ad6
        
        arg3 = &arg3[1]
        esi = &esi[1]
        i = i_1
        i_1 -= 4
    while (i u>= 4)

if (i_1 != 0xfffffffc)
label_555ad6:
    arg1.b = *arg3
    
    if (arg1.b != *esi)
    label_555b03:
        arg4 = nullptr
        arg1.b = 0
        return arg1
    
    if (i_1 != 0xfffffffd)
        arg1.b = *(arg3 + 1)
        
        if (arg1.b != *(esi + 1))
            goto label_555b03
        
        if (i_1 != 0xfffffffe)
            arg1.b = *(arg3 + 2)
            
            if (arg1.b != *(esi + 2))
                goto label_555b03
            
            if (i_1 != 0xffffffff)
                arg1.b = *(arg3 + 3)
                
                if (arg1.b != *(esi + 3))
                    goto label_555b03

arg4 = 1
arg1.b = 1
return arg1
