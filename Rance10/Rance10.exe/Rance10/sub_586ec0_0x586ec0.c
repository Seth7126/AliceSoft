// 函数: sub_586ec0
// 地址: 0x586ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *arg1
int32_t ebx
int32_t var_4 = ebx

for (; i != arg1[1]; i = &i[2])
    void* edx_1 = *i
    
    if (edx_1 != 0)
        ebx.b = *(edx_1 + 0x204)
        
        if (ebx.b != 0)
            i.b = 1
            return i
        
        ebx.b = *(edx_1 + 0x1a8)
        
        if (ebx.b != 0)
            i.b = 1
            return i
        
        ebx.b = *(edx_1 + 0x1b0)
        
        if (ebx.b != 0)
            i.b = 1
            return i
        
        ebx.b = *(edx_1 + 0x21c)
        
        if (ebx.b != 0)
            i.b = 1
            return i
        
        edx_1.b = *(edx_1 + 0x228)
        
        if (edx_1.b != 0)
            i.b = 1
            return i

i.b = 0
return i
