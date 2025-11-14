// 函数: sub_6046b0
// 地址: 0x6046b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg1 + 0x14)
int32_t result = 0xffffffff
int32_t result_1 = 0

if (edi != 0)
    do
        char* ecx
        
        if (*(arg1 + 0x18) u< 0x10)
            ecx = arg1 + 4
        else
            ecx = *(arg1 + 4)
        
        char* ecx_1
        
        if (ecx[result_1] u>= 0x81)
            if (*(arg1 + 0x18) u< 0x10)
                ecx_1 = arg1 + 4
            else
                ecx_1 = *(arg1 + 4)
        
        char* ecx_2
        void* ecx_3
        
        if (ecx[result_1] u< 0x81 || ecx_1[result_1] u> 0x9f)
            if (*(arg1 + 0x18) u< 0x10)
                ecx_2 = arg1 + 4
            else
                ecx_2 = *(arg1 + 4)
            
            if (ecx_2[result_1] u>= 0xe0)
                if (*(arg1 + 0x18) u< 0x10)
                    ecx_3 = arg1 + 4
                else
                    ecx_3 = *(arg1 + 4)
        
        if ((ecx[result_1] u< 0x81 || ecx_1[result_1] u> 0x9f)
                && (ecx_2[result_1] u< 0xe0 || *(ecx_3 + result_1) u> 0xef))
            void* ecx_4
            
            if (*(arg1 + 0x18) u< 0x10)
                ecx_4 = arg1 + 4
            else
                ecx_4 = *(arg1 + 4)
            
            if (*(ecx_4 + result_1) == 0x5c)
                result = result_1
            
            result_1 += 1
        else
            result_1 += 2
    while (result_1 u< edi)

return result
