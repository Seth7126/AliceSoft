// 函数: sub_43c3a0
// 地址: 0x43c3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 != arg1)
    sub_401ff0(arg2, arg1, 0, 0xffffffff)

int32_t edi = *(arg2 + 0x10)
int32_t result = 0

if (edi != 0)
    do
        int32_t ecx_2 = *(arg2 + 0x14)
        char* edx_1
        
        if (ecx_2 u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        char* edx_2
        
        if (edx_1[result] u>= 0x81)
            if (ecx_2 u< 0x10)
                edx_2 = arg2
            else
                edx_2 = *arg2
        
        char* edx_3
        char* edx_4
        
        if (edx_1[result] u< 0x81 || edx_2[result] u> 0x9f)
            if (ecx_2 u< 0x10)
                edx_3 = arg2
            else
                edx_3 = *arg2
            
            if (edx_3[result] u>= 0xe0)
                if (ecx_2 u< 0x10)
                    edx_4 = arg2
                else
                    edx_4 = *arg2
        
        if ((edx_1[result] u< 0x81 || edx_2[result] u> 0x9f)
                && (edx_3[result] u< 0xe0 || edx_4[result] u> 0xef))
            char* edx_5
            
            if (ecx_2 u< 0x10)
                edx_5 = arg2
            else
                edx_5 = *arg2
            
            if (edx_5[result] == 0x2f)
                char* ecx_3
                
                if (ecx_2 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
                
                ecx_3[result] = 0x5c
        else
            result += 1
        
        result += 1
    while (result u< edi)

return result
