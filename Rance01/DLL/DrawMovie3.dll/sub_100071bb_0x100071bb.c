// 函数: sub_100071bb
// 地址: 0x100071bb
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_10 = edi

if (arg4 != 0)
    if (arg1 == 0)
        goto label_100071ef
    
label_100071e1:
    int32_t i_2 = arg2
    
    if (i_2 u<= 0)
        goto label_100071ef
    
    if (arg4 != 0)
        char* edx_1 = arg3
        
        if (edx_1 == 0)
            *arg1 = 0
        label_100071ef:
            *__errno() = 0x16
            sub_100020e4(0, 0, 0, 0, 0)
            return 0x16
        
        char* eax_3 = arg1
        char ecx
        
        if (arg4 != 0xffffffff)
            int32_t i
            
            do
                ecx = *edx_1
                *eax_3 = ecx
                eax_3 = &eax_3[1]
                edx_1 = &edx_1[1]
                
                if (ecx == 0)
                    break
                
                int32_t i_3 = i_2
                i_2 -= 1
                
                if (i_3 == 1)
                    break
                
                i = arg4
                arg4 -= 1
            while (i != 1)
            
            if (arg4 == 0)
                *eax_3 = 0
        else
            int32_t i_1
            
            do
                ecx = *edx_1
                *eax_3 = ecx
                eax_3 = &eax_3[1]
                edx_1 = &edx_1[1]
                
                if (ecx == 0)
                    break
                
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (i_2 == 0)
            if (arg4 == 0xffffffff)
                arg1[arg2 - 1] = 0
                return 0x50
            
            *arg1 = 0
            *__errno() = 0x22
            sub_100020e4(0, 0, 0, 0, 0)
            return 0x22
    else
        *arg1 = 0
else
    if (arg1 != 0)
        goto label_100071e1
    
    if (arg2 != 0)
        goto label_100071ef

return 0
