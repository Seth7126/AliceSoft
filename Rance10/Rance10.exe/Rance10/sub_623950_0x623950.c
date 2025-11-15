// 函数: sub_623950
// 地址: 0x623950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** esi = arg3
char* ecx
char* var_4 = ecx
esi[0x101] = &esi[1]
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x14)

if (*(arg1 + 0xc) s< &result[1])
label_6239ce:
    result.b = 0
    return result

int32_t ebp_1

if (*(arg1 + 0xc) != 0)
    ebp_1 = *(arg1 + 8)
else
    ebp_1 = 0

int32_t ebp_2 = *(result + ebp_1)
int32_t edi_1 = 0
*(arg1 + 0x14) = &result[1]

if (ebp_2 s> 0)
    do
        if (sub_6237c0(ecx, arg1, arg2, &arg3).b == 0)
            goto label_6239ce
        
        edi_1 += 1
        esi[0x101]->Next = arg3
        esi[0x101] = &esi[0x101]->Handler
        ecx = var_4
    while (edi_1 s< ebp_2)

result.b = 1
return result
