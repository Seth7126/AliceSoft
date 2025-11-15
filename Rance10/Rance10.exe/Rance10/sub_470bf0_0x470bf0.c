// 函数: sub_470bf0
// 地址: 0x470bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg1[5]
int32_t result = 0
int32_t edi = arg1[4]
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

bool cond:0 = edi == result

if (edi s> result)
    do
        char* edx_2
        
        if (esi u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        if (edx_2[result] s< 0x30)
            break
        
        int32_t* edx_3
        
        if (esi u< 0x10)
            edx_3 = arg1
        else
            edx_3 = *arg1
        
        if (*(edx_3 + result) s> 0x39)
            break
        
        result += 1
    while (result s< edi)
    
    cond:0 = edi == result

result.b = cond:0
return result
