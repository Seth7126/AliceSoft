// 函数: __wincmdln
// 地址: 0x6a7f4f
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0

if (data_75df58 == 0)
    ___initmbctable()

void* const result = data_75df48

if (result == 0)
    result = &data_704170

while (true)
    char ecx = *result
    
    if (ecx u<= 0x20)
        if (ecx == 0)
            return result
        
        if (edi == 0)
            while (true)
                int32_t eax
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b u> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (ecx == 0x22)
        int32_t eax_1
        eax_1.b = edi == 0
        edi = eax_1
    
    if (__ismbblead(ecx) != 0)
        result += 1
    
    result += 1
