// 函数: sub_654ea0
// 地址: 0x654ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1
void* esi = edi[0x6c]

if (edi[0x3f] != 0)
    if (*(esi + 0x38) == 0)
        sub_6549d0(edi)
    
    *(esi + 0x38) -= 1

char* result = esi + 0xbc
arg1 = result
int32_t i = 0
int16_t ebx = (1 << (edi[0x61]).b).w

if (edi[0x53] s> 0)
    do
        if (sub_654840(edi, result) != 0)
            int16_t* eax_1 = *(arg2 + (i << 2))
            *eax_1 |= ebx
        
        result = arg1
        i += 1
    while (i s< edi[0x53])

result.b = 1
return result
