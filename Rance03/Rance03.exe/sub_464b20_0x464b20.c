// 函数: sub_464b20
// 地址: 0x464b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[4]
int32_t result = 0
int32_t esi = arg1[5]
int32_t edi = 0
char* edx

if (esi u< 0x10)
    edx = arg1
else
    edx = *arg1

char* edx_1

if (*edx != 0x2b)
    if (esi u< 0x10)
        edx_1 = arg1
    else
        edx_1 = *arg1

if (*edx == 0x2b || *edx_1 == 0x2d)
    result = 1

bool cond:0 = ebx != result

if (ebx s> result)
    do
        char* edx_2
        
        if (esi u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        char* edx_3
        
        if (edx_2[result] s>= 0x30)
            if (esi u< 0x10)
                edx_3 = arg1
            else
                edx_3 = *arg1
        
        if (edx_2[result] s< 0x30 || edx_3[result] s> 0x39)
            char* edx_4
            
            if (esi u< 0x10)
                edx_4 = arg1
            else
                edx_4 = *arg1
            
            if (edx_4[result] != 0x2e)
                break
        
        int32_t* edx_5
        
        if (esi u< 0x10)
            edx_5 = arg1
        else
            edx_5 = *arg1
        
        if (*(edx_5 + result) == 0x2e)
            edi += 1
        
        result += 1
    while (result s< ebx)
    
    cond:0 = ebx != result

if (not(cond:0) && edi == 1)
    result.b = 1
    return result

result.b = 0
return result
