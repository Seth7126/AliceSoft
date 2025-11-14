// 函数: __cropzeros_l
// 地址: 0x6a96c2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, arg2)
char* edx = arg1
void* edi = var_14
char i = *edx
int32_t* result

if (i != 0)
    result.b = ***(edi + 0x84)
    
    while (i != result.b)
        edx = &edx[1]
        i = *edx
        
        if (i == 0)
            break

result.b = *edx
char* edx_1 = &edx[1]

if (result.b != 0)
    while (true)
        result.b = *edx_1
        
        if (result.b == 0)
            break
        
        if (result.b == 0x65)
            break
        
        if (result.b == 0x45)
            break
        
        edx_1 = &edx_1[1]
    
    char* esi_1 = edx_1
    
    do
        edx_1 -= 1
    while (*edx_1 == 0x30)
    
    result.b = *edx_1
    
    if (result.b == ***(edi + 0x84))
        edx_1 -= 1
    
    do
        result.b = *esi_1
        edx_1 = &edx_1[1]
        esi_1 = &esi_1[1]
        *edx_1 = result.b
    while (result.b != 0)

char var_8

if (var_8 != 0)
    int32_t* result_1
    result = result_1
    result[0x1c] &= 0xfffffffd

return result
