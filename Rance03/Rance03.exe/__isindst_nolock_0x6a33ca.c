// 函数: __isindst_nolock
// 地址: 0x6a33ca
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg3
var_8 = 0
int32_t result = sub_6a3218(&var_8)

if (result != 0)
    int32_t var_20_3
    __builtin_memset(&var_20_3, 0, 0x14)
    __invoke_watson()
    noreturn

if (var_8 != 0)
    int32_t ecx_1 = *(arg4 + 0x14)
    
    if (ecx_1 != data_74a610 || ecx_1 != data_74a61c)
        if (data_75c988 == 0)
            int32_t eax_18 = 3
            int32_t edx = 2
            int32_t ebx_1 = 1
            int32_t edi_1 = 0xb
            
            if (ecx_1 s< 0x6b)
                eax_18 = 4
                edi_1 = 0xa
                edx = 1
                ebx_1 = 5
            
            sub_6a38e0(1, 1, ecx_1, eax_18, edx, 0, 0, 2, 0, 0, 0)
            sub_6a38e0(0, 1, *(arg4 + 0x14), edi_1, ebx_1, 0, 0, 2, 0, 0, 0)
        else
            int32_t var_3c_1
            int32_t var_38_1
            uint32_t var_34_1
            uint32_t var_30_1
            uint32_t var_2c_1
            uint32_t var_28_1
            
            if (data_75ca28 != 0)
                var_28_1 = zx.d(data_75ca2e)
                var_2c_1 = 0
                var_30_1 = 0
                var_34_1 = zx.d(data_75ca2a)
                var_38_1 = ecx_1
                var_3c_1 = 0
            else
                var_28_1 = 0
                var_2c_1 = zx.d(data_75ca2c)
                var_30_1 = zx.d(data_75ca2e)
                var_34_1 = zx.d(data_75ca2a)
                var_38_1 = ecx_1
                var_3c_1 = 1
            
            sub_6a38e0(1, var_3c_1, var_38_1, var_34_1, var_30_1, var_2c_1, var_28_1, 
                zx.d(data_75ca30), zx.d(data_75ca32), zx.d(data_75ca34), zx.d(data_75ca36))
            int32_t var_3c_2
            int32_t var_38_2
            uint32_t var_34_2
            uint32_t var_30_2
            uint32_t var_2c_2
            uint32_t var_28_2
            
            if (data_75c9d4 != 0)
                var_28_2 = zx.d(data_75c9da)
                var_2c_2 = 0
                var_30_2 = 0
                var_34_2 = zx.d(data_75c9d6)
                var_38_2 = *(arg4 + 0x14)
                var_3c_2 = 0
            else
                var_28_2 = 0
                var_2c_2 = zx.d(data_75c9d8)
                var_30_2 = zx.d(data_75c9da)
                var_34_2 = zx.d(data_75c9d6)
                var_38_2 = *(arg4 + 0x14)
                var_3c_2 = 1
            
            sub_6a38e0(0, var_3c_2, var_38_2, var_34_2, var_30_2, var_2c_2, var_28_2, 
                zx.d(data_75c9dc), zx.d(data_75c9de), zx.d(data_75c9e0), zx.d(data_75c9e2))
    
    int32_t edx_1 = data_74a614
    int32_t edi_2 = data_74a620
    int32_t ecx_2 = *(arg4 + 0x1c)
    
    if (edx_1 s>= edi_2)
        if (ecx_2 s< edi_2 || ecx_2 s> edx_1)
            return 1
        
        if (ecx_2 s> edi_2 && ecx_2 s< edx_1)
            return 0
    else
        if (ecx_2 s< edx_1 || ecx_2 s> edi_2)
            return 0
        
        if (ecx_2 s> edx_1 && ecx_2 s< edi_2)
            return 1
    
    int32_t esi_2 = ((*(arg4 + 8) * 0x3c + *(arg4 + 4)) * 0x3c + *arg4) * 0x3e8
    
    if (ecx_2 != edx_1)
        result.b = esi_2 s< data_74a624
    else
        result.b = esi_2 s>= data_74a618

return result
