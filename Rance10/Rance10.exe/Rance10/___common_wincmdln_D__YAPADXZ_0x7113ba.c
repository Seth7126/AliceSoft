// 函数: ??$common_wincmdln@D@@YAPADXZ
// 地址: 0x7113ba
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

___acrt_initialize_multibyte()
void* result = data_7fcb18

if (result == 0)
    result = &data_7fc700

int32_t ebx
ebx.b = 0

while (true)
    int32_t eax
    eax.b = *result
    
    if (eax.b s<= 0x20)
        if (eax.b == 0)
            return result
        
        if (ebx.b == 0)
            while (true)
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b s> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (eax.b == 0x22)
        ebx.b = ebx.b == 0
    
    if (__ismbblead(eax.b) != 0)
        result += 1
    
    result += 1
