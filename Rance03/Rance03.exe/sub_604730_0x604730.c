// 函数: sub_604730
// 地址: 0x604730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x14)

if (esi == 0)
    return 

int32_t edx_1 = 0
void* ecx_1

if (esi s> 0)
    do
        char* ecx
        
        if (*(arg1 + 0x18) u< 0x10)
            ecx = arg1 + 4
        else
            ecx = *(arg1 + 4)
        
        if (ecx[edx_1] u>= 0x81)
            if (*(arg1 + 0x18) u< 0x10)
                ecx_1 = arg1 + 4
            else
                ecx_1 = *(arg1 + 4)
        
        if (ecx[edx_1] u>= 0x81 && *(ecx_1 + edx_1) u<= 0x9f)
            edx_1 += 2
            ecx_1.b = 0
        else
            char* ecx_2
            
            if (*(arg1 + 0x18) u< 0x10)
                ecx_2 = arg1 + 4
            else
                ecx_2 = *(arg1 + 4)
            
            if (ecx_2[edx_1] u>= 0xe0)
                if (*(arg1 + 0x18) u< 0x10)
                    ecx_1 = arg1 + 4
                else
                    ecx_1 = *(arg1 + 4)
            
            if (ecx_2[edx_1] u< 0xe0 || *(ecx_1 + edx_1) u> 0xef)
                if (*(arg1 + 0x18) u< 0x10)
                    ecx_1 = arg1 + 4
                else
                    ecx_1 = *(arg1 + 4)
                
                ecx_1.b = *(ecx_1 + edx_1) == 0x5c
                edx_1 += 1
            else
                edx_1 += 2
                ecx_1.b = 0
    while (edx_1 s< esi)

if (esi s<= 0 || ecx_1.b == 0)
    sub_4057c0(arg1 + 4, 0x6ebbb4, 1)
