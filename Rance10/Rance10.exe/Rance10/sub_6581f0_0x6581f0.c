// 函数: sub_6581f0
// 地址: 0x6581f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3[4]
int32_t ebp = arg2
int32_t esi = arg3[1]
char* edi = *arg3
int32_t result = arg4
int32_t result_1 = result

if (ebx[0x65] != 0)
label_6582ac:
    
    if (arg5 s> result)
        if (*(ebx[0x6c] + 0x28) == 0)
            *(*ebx + 0x14) = 0x78
            (*(*ebx + 4))(ebx, 0xffffffff)
            *(ebx[0x6c] + 0x28) = 1
        
        result = 0x19
        ebp <<= 0x19 - result_1.b
else if (result s< 0x19)
    while (true)
        if (esi == 0)
            if ((*(ebx[6] + 0xc))(ebx) == 0)
                return 0
            
            int32_t* esi_1 = ebx[6]
            edi = *esi_1
            esi = esi_1[1]
        
        uint32_t eax_6 = zx.d(*edi)
        esi -= 1
        edi = &edi[1]
        
        if (eax_6 == 0xff)
            uint32_t i
            
            do
                if (esi == 0)
                    if ((*(ebx[6] + 0xc))(ebx) == 0)
                        return 0
                    
                    char** esi_2 = ebx[6]
                    edi = *esi_2
                    esi = esi_2[1]
                
                i = zx.d(*edi)
                esi -= 1
                edi = &edi[1]
            while (i == 0xff)
            
            if (i != 0)
                ebx[0x65] = i
                result = result_1
                break
            
            eax_6 = 0xff
        
        ebp = ebp << 8 | eax_6
        result = result_1 + 8
        result_1 = result
        
        if (result s>= 0x19)
            goto label_6582f2
    
    goto label_6582ac

label_6582f2:
*arg3 = edi
arg3[1] = esi
arg3[2] = ebp
arg3[3] = result
result.b = 1
return result
