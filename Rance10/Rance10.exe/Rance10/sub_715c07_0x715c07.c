// 函数: sub_715c07
// 地址: 0x715c07
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
var_8 = 0
int32_t result
int32_t edx
result, edx = __get_fmode(&var_8)

if (result != 0)
    int32_t var_20_3
    __builtin_memset(&var_20_3, 0, 0x14)
    __invoke_watson()
    noreturn

if (var_8 != 0)
    int32_t edi
    int32_t var_14_1 = edi
    int32_t ecx_1 = *(arg4 + 0x14)
    
    if (ecx_1 != data_7e1720 || ecx_1 != data_7e172c)
        if (data_7fca10 == 0)
            int32_t eax_16 = 3
            int32_t edx_2 = 2
            int32_t ebx_1 = 1
            int32_t edi_1 = 0xb
            
            if (ecx_1 s< 0x6b)
                eax_16 = 4
                edi_1 = 0xa
                edx_2 = 1
                ebx_1 = 5
            
            int32_t ecx_3
            int32_t edx_3
            ecx_3, edx_3 =
                cvtdate(eax_16, edx_2, ecx_1, 0, 1, ecx_1, eax_16, edx_2, 0, 0, 2, 0, 0, 0)
            cvtdate(0, edx_3, ecx_3, 1, 1, *(arg4 + 0x14), edi_1, ebx_1, 0, 0, 2, 0, 0, 0)
        else
            int32_t var_3c_1
            int32_t var_38_1
            uint32_t var_34_1
            uint32_t var_30_1
            uint32_t var_2c_1
            uint32_t var_28_1
            uint32_t eax_6
            
            if (data_7fcab0 != 0)
                var_28_1 = zx.d(data_7fcab6)
                eax_6 = zx.d(data_7fcab2)
                var_2c_1 = 0
                var_30_1 = 0
                var_34_1 = eax_6
                var_38_1 = ecx_1
                var_3c_1 = 0
            else
                var_28_1 = 0
                var_2c_1 = zx.d(data_7fcab4)
                var_30_1 = zx.d(data_7fcab6)
                eax_6 = zx.d(data_7fcab2)
                var_34_1 = eax_6
                var_38_1 = ecx_1
                var_3c_1 = 1
            
            int32_t ecx_2
            int32_t edx_1
            ecx_2, edx_1 = cvtdate(eax_6, edx, ecx_1, 0, var_3c_1, var_38_1, var_34_1, var_30_1, 
                var_2c_1, var_28_1, zx.d(data_7fcab8), zx.d(data_7fcaba), zx.d(data_7fcabc), 
                zx.d(data_7fcabe))
            int32_t var_3c_2
            int32_t var_38_2
            uint32_t var_34_2
            uint32_t var_30_2
            uint32_t var_2c_2
            uint32_t var_28_2
            uint32_t eax_14
            
            if (data_7fca5c != 0)
                var_28_2 = zx.d(data_7fca62)
                eax_14 = zx.d(data_7fca5e)
                var_2c_2 = 0
                var_30_2 = 0
                var_34_2 = eax_14
                var_38_2 = *(arg4 + 0x14)
                var_3c_2 = 0
            else
                var_28_2 = 0
                var_2c_2 = zx.d(data_7fca60)
                var_30_2 = zx.d(data_7fca62)
                eax_14 = zx.d(data_7fca5e)
                var_34_2 = eax_14
                var_38_2 = *(arg4 + 0x14)
                var_3c_2 = 1
            
            cvtdate(eax_14, edx_1, ecx_2, 1, var_3c_2, var_38_2, var_34_2, var_30_2, var_2c_2, 
                var_28_2, zx.d(data_7fca64), zx.d(data_7fca66), zx.d(data_7fca68), 
                zx.d(data_7fca6a))
    
    int32_t edx_4 = data_7e1724
    int32_t edi_2 = data_7e1730
    int32_t ecx_4 = *(arg4 + 0x1c)
    
    if (edx_4 s>= edi_2)
        if (ecx_4 s< edi_2 || ecx_4 s> edx_4)
            result = 1
        else if (ecx_4 s<= edi_2 || ecx_4 s>= edx_4)
        label_715dc1:
            int32_t esi_2 = ((*(arg4 + 8) * 0x3c + *(arg4 + 4)) * 0x3c + *arg4) * 0x3e8
            
            if (ecx_4 != edx_4)
                result.b = esi_2 s< data_7e1734
            else
                result.b = esi_2 s>= data_7e1728
        else
            result = 0
    else if (ecx_4 s< edx_4 || ecx_4 s> edi_2)
        result = 0
    else
        if (ecx_4 s<= edx_4 || ecx_4 s>= edi_2)
            goto label_715dc1
        
        result = 1

return result
