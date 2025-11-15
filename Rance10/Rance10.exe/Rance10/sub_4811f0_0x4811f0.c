// 函数: sub_4811f0
// 地址: 0x4811f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 0x10)
int32_t* i = *edi
int32_t* result

while (i != edi)
    void* ecx = i[0xa]
    
    if (ecx != 0 && (*(**(ecx + 4) + 0x18))().b != 0)
        goto label_4812a2
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            result = i[1]
            
            if (*(result + 0xd) == 0)
                while (i == result[2])
                    i = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i = result
        else
            i = i_2
            result = *i
            
            while (*(result + 0xd) == 0)
                i = result
                result = *i

int32_t** edi_1 = *(arg1 + 0x18)
int32_t* i_1 = *edi_1

if (i_1 == edi_1)
label_4812c8:
    result.b = 0
    return result

while (true)
    void* ecx_2 = i_1[5]
    
    if (ecx_2 != 0 && (*(**(ecx_2 + 4) + 0x18))().b != 0)
        break
    
    if (*(i_1 + 0xd) == 0)
        int32_t* i_3 = i_1[2]
        
        if (*(i_3 + 0xd) != 0)
            result = i_1[1]
            
            if (*(result + 0xd) == 0)
                while (i_1 == result[2])
                    i_1 = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i_1 = result
        else
            i_1 = i_3
            result = *i_1
            
            while (*(result + 0xd) == 0)
                i_1 = result
                result = *i_1
    
    if (i_1 == edi_1)
        goto label_4812c8

label_4812a2:
result.b = 1
return result
