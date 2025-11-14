// 函数: sub_405190
// 地址: 0x405190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 != 0)
    int32_t i_1 = arg4 - 4
    
    if (arg4 u>= 4)
        int32_t i
        
        do
            if (*arg3 != *arg2)
                goto label_4051b6
            
            arg3 = &arg3[1]
            arg2 = &arg2[1]
            i = i_1
            i_1 -= 4
        while (i u>= 4)
    
    if (i_1 != 0xfffffffc)
    label_4051b6:
        arg1.b = *arg3
        char temp1_1 = *arg2
        
        if (arg1.b != temp1_1)
            return sbb.d(arg1, arg1, arg1.b u< temp1_1) | 1
        
        if (i_1 != 0xfffffffd)
            arg1.b = *(arg3 + 1)
            char temp3_1 = *(arg2 + 1)
            
            if (arg1.b != temp3_1)
                return sbb.d(arg1, arg1, arg1.b u< temp3_1) | 1
            
            if (i_1 != 0xfffffffe)
                arg1.b = *(arg3 + 2)
                char temp4_1 = *(arg2 + 2)
                
                if (arg1.b != temp4_1)
                    return sbb.d(arg1, arg1, arg1.b u< temp4_1) | 1
                
                if (i_1 != 0xffffffff)
                    arg1.b = *(arg3 + 3)
                    char temp5_1 = *(arg2 + 3)
                    
                    if (arg1.b != temp5_1)
                        return sbb.d(arg1, arg1, arg1.b u< temp5_1) | 1

return 0
