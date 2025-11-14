// 函数: sub_638370
// 地址: 0x638370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4_1 = arg1
void* ebx = *(arg1 + 0x68)
sub_638300(arg1)
int32_t eax = *(arg1 + 0x44)

if (eax != 0)
    _free(eax)

if (ebx != 0)
    int32_t i = 0
    int32_t* esi_1 = ebx + 0xc
    
    do
        void* ebx_1 = *esi_1
        int32_t eax_1 = *(ebx_1 + 8)
        
        if (eax_1 != 0)
            _free(eax_1)
        
        __builtin_memset(ebx_1, 0, 0x14)
        
        if (i != 7)
            _free(*esi_1)
        
        i += 1
        esi_1 = &esi_1[1]
    while (i s< 0xf)
    
    _free(ebx)

_memset(arg1, 0, 0x70)
return 0
