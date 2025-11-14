// 函数: sub_57bf00
// 地址: 0x57bf00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
int32_t* edi = arg1 + 0x40
int32_t ebx_2 = (*(ebp + 0x28) - *(ebp + 0x24)) s>> 6
int32_t* var_4 = edi
sub_57ec00(edi, ebx_2)
int32_t esi = 0
int32_t result

if (ebx_2 s> 0)
    void* edx_1 = nullptr
    int32_t ebx_3 = 0
    arg2 = nullptr
    
    while (true)
        char* edi_2 = *edi + ebx_3
        
        if (esi s< 0 || esi s>= (*(ebp + 0x28) - *(ebp + 0x24)) s>> 6)
            result.b = 0
            return result
        
        void* result_1 = *(ebp + 0x24) + edx_1
        *(edi_2 + 0x20) = *(result_1 + 0x24)
        *(edi_2 + 0x30) = *(result_1 + 0x34)
        *(edi_2 + 0x38) = *(result_1 + 0x3c)
        *(edi_2 + 0x18) = sub_578720(ebp, *(result_1 + 0x1c))
        result = result_1
        
        if (edi_2 != result)
            sub_401ff0(edi_2, result, 0, 0xffffffff)
        
        esi += 1
        edx_1 = arg2 + 0x40
        ebx_3 += 0x3c
        arg2 = edx_1
        
        if (esi s>= ebx_2)
            break
        
        edi = var_4

result.b = 1
return result
