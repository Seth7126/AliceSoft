// 函数: sub_5177a0
// 地址: 0x5177a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* result = arg1
int32_t* esi = *(result + 0xb0)
int32_t edi = *(result + 0xb4)
void* result_1 = result

if (esi != edi)
    do
        void* ecx = *esi
        
        if (arg4 == 0)
            if (*(ecx + 4) != 0)
                result, edi = sub_508720(ecx, arg2, arg3, 0)
                result.b = result.b != 0
            else
                result.b = 0
        else if (*(ecx + 4) != 0)
            result, edi = sub_508720(ecx, arg2, arg3, 1)
            result.b = result.b != 0
        else
            result.b = 0
        
        if (result.b != 0)
            goto label_517827
        
        esi = &esi[1]
    while (esi != edi)
    
    result = result_1

void** esi_1 = *(result + 0xbc)
int32_t edi_1 = *(result + 0xc0)

if (esi_1 != edi_1)
    do
        void* ecx_1 = *esi_1
        
        if (arg4 == 0)
            if (*(ecx_1 + 4) != 0)
                result, edi_1 = sub_508720(ecx_1, arg2, arg3, 0)
                result.b = result.b != 0
            else
                result.b = 0
        else if (*(ecx_1 + 4) != 0)
            result, edi_1 = sub_508720(ecx_1, arg2, arg3, 1)
            result.b = result.b != 0
        else
            result.b = 0
        
        if (result.b != 0)
            goto label_517827
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi_1)
    
    result = result_1

void** esi_2 = *(result + 0xd4)
int32_t edi_2 = *(result + 0xd8)

if (esi_2 == edi_2)
label_5178ad:
    result.b = 0
    return result

while (true)
    void* ecx_3 = *esi_2
    
    if (arg4 == 0)
        if (*(ecx_3 + 4) != 0)
            result, edi_2 = sub_508720(ecx_3, arg2, arg3, 0)
            result.b = result.b != 0
        else
            result.b = 0
    else if (*(ecx_3 + 4) != 0)
        result, edi_2 = sub_508720(ecx_3, arg2, arg3, 1)
        result.b = result.b != 0
    else
        result.b = 0
    
    if (result.b != 0)
        break
    
    esi_2 = &esi_2[1]
    
    if (esi_2 == edi_2)
        goto label_5178ad

label_517827:
result.b = 1
return result
