// 函数: sub_4c4830
// 地址: 0x4c4830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_485c10(arg1 + 4, arg3, 0)
int32_t result = sub_4c8700(arg1 - 4)

if (result.b != 0)
label_4c48f7:
    
    if (arg3 == 0x10)
        *(arg1 + 0xa0) = 0
else
    result = sub_4c75f0(arg1 + 0xb4)
    int32_t result_1 = result
    
    if (arg3 != 1)
        if (arg3 != 0x10)
            if (arg3 != 0x11)
                goto label_4c48f7
            
            *(arg1 + 0xa1) = 0
            return result
        
        if (*(arg1 + 0xa4) == result_1)
            *(arg1 + 0xa4) = 0xffffffff
            *(arg1 + 0xa8) = 0xffffffff
            *(arg1 + 0xa0) = 0
            return result
        
        *(arg1 + 0xa0) = 0
    else
        int32_t ecx_2 = *(arg1 + 0x90)
        int32_t ecx_3
        
        if (ecx_2 == 0)
            ecx_3 = 0
        else
            ecx_3 = ecx_2 + 8
        
        result = arg2
        
        if (result != ecx_3)
            int32_t ecx_4 = *(arg1 + 0x94)
            int32_t ecx_5
            
            if (ecx_4 == 0)
                ecx_5 = 0
            else
                ecx_5 = ecx_4 + 8
            
            if (result != ecx_5 && *(arg1 + 0xa4) == result_1)
                *(arg1 + 0xa4) = 0xffffffff
                *(arg1 + 0xa8) = 0xffffffff

return result
