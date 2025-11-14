// 函数: sub_4a48f0
// 地址: 0x4a48f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x5c) = 0

int32_t eax_3 = *(*(arg1 + 0x58) + 0x90)
*(arg1 + 0x50) = arg1
uint32_t* result

if (sub_4ba950(arg1 + 0x6c, arg2, arg3).b != 0)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        int32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        int32_t var_20_3
        void* var_1c_3
        void* eax_8
        
        switch (ecx_8)
            case 0
                result = sub_4998f0(sub_4a3970(arg1), arg2, arg3)
            label_4a499e:
                
                if (result.b != 0)
                    goto label_4a4a59
            case 1
                result = sub_49e3f0(sub_4a3a10(arg1), arg2, arg3)
                goto label_4a499e
            case 2
                var_1c_3 = arg3
                var_20_3 = arg2
                eax_8 = sub_4a3ac0(arg1)
            label_4a4999:
                result = sub_4e2ed0(eax_8, var_20_3, var_1c_3)
                goto label_4a499e
            case 3
                var_1c_3 = arg3
                var_20_3 = arg2
                eax_8 = sub_4a3b70(arg1)
                goto label_4a4999
            case 4
                result = sub_4e0500(sub_4a3c20(arg1), arg2, arg3)
                goto label_4a499e
            case 5
                int32_t var_20_5 = ecx_8
                result = sub_4b42a0(sub_4a3cd0(arg1), arg3)
                goto label_4a499e
            case 6
                int32_t var_20_6 = ecx_8
                result = sub_4a1380(sub_4a3d80(arg1), arg3)
                goto label_4a499e
            case 7
                int32_t var_20_7 = ecx_8
                result = sub_4c91a0(sub_4a3e30(arg1), arg3)
                goto label_4a499e
            case 8
                result = sub_4afae0(sub_4a3ee0(arg1), arg2, arg3)
                goto label_4a499e
            case 9
                result = sub_4d5560(sub_4a3f80(arg1), arg3, arg4)
                goto label_4a499e
            case 0xa
                if (sub_511aa0(*(sub_4a4020(arg1) + 0x34), arg2, arg3).b != 0)
                label_4a4a59:
                    
                    if (arg4 != 0)
                        void* eax_16 = *(arg1 + 0x58)
                        
                        if (*(eax_16 + 0x90) != eax_3)
                            *(eax_16 + 0x90) = eax_3
                            *(eax_16 + 4) = 1
                        
                        void* ecx_31 = *(arg1 + 0x58)
                        *(ecx_31 + 0x98) = *(ecx_31 + 0x94)
                    
                    result.b = 1
                    return result

result.b = 0
return result
