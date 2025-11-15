// 函数: sub_686a80
// 地址: 0x686a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1
int32_t* ecx = arg1[0xe]
int32_t* result

if (ecx != 0)
    result = arg1[0xf]
    
    if (result != 0)
        int32_t edi_1 = arg1[0x11]
        arg1[0x1a] = 0
        result_1 = result
        (*(*ecx + 0x84))(ecx, 1, &result_1, edi_1)
        int32_t* result_2 = result_1
        arg1[0x13] = edi_1
        arg1[0x12] = result_2
        int32_t edx_1 = 0
        __builtin_memset(&arg1[0x53], 0, 0x28)
        arg1[0xa1] = 0
        int32_t eax_1 = arg1[0xaa]
        int32_t* ecx_1 = arg1[0xa9]
        uint32_t edi_5 = (eax_1 - ecx_1 + 3) u>> 2
        
        if (ecx_1 u> eax_1)
            edi_5 = 0
        
        if (edi_5 != 0)
            do
                edx_1 += 1
                *ecx_1 = 0
                ecx_1 = &ecx_1[1]
            while (edx_1 != edi_5)
        
        if ((*(*arg1 + 0xc0))(0).b != 0 && (*(*arg1 + 0xc8))(0).b != 0
                && (*(*arg1 + 0xcc))(0).b != 0 && (*(*arg1 + 0xd0))(1).b != 0)
            return (*(*arg1 + 0xc4))(0, 0) != 0

result.b = 0
return result
