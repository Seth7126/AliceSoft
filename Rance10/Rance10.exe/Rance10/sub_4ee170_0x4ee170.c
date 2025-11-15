// 函数: sub_4ee170
// 地址: 0x4ee170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x74)
uint32_t edi

if (ecx != 0)
    edi = (*(*ecx + 8))(1)
else
    edi = 0xffffffff

uint32_t result

if (edi != 5 && edi != 7 && edi != 0xd)
    result = (*(**(arg1 + 0x74) + 0x18))()
    
    if (result.b == 0 || edi - 2 u> 9)
    label_4ee1c3:
        
        if (*(arg1 + 0x7c) != 0)
            result = sub_4ee170()
        
        if (*(arg1 + 0x7c) == 0 || result.b == 0)
            result.b = *(arg1 + 0x220)
            return result
    else
        switch (edi + &jump_table_4ee1dc[1]:2)
            case &lookup_table_4ee1e4[2], &lookup_table_4ee1e4[5], &lookup_table_4ee1e4[6], 
                    &lookup_table_4ee1e4[7], &lookup_table_4ee1e4[8]
                goto label_4ee1c3

result.b = 1
return result
