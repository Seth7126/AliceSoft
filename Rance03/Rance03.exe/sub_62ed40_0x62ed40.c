// 函数: sub_62ed40
// 地址: 0x62ed40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg4 + 0x188)
int32_t esi = *(arg4 + 0x194)
int32_t i_11 = *arg3
uint32_t edi = *(arg4 + 0x190)
uint32_t eax
eax.b = *(arg3 + 9)
int32_t i_13 = i_11

if (eax.b u<= 8 && edi != 0)
label_62ed95:
    char* edx_1 = arg2
    
    switch (zx.d(arg3[2].b))
        case 0
            uint32_t edi_5 = edi
            
            if (eax.b == 2)
                void* ebp_1 = edx_1
                void* var_1c_2 = ebp_1
                
                if (i_11 != 0)
                    int32_t i_10 = ((i_11 - 1) u>> 2) + 1
                    int32_t i
                    
                    do
                        uint32_t edi_6 = zx.d(*ebp_1)
                        int32_t eax_53 = edi_6 & 0xc0
                        int32_t esi_2 = edi_6 & 0xc
                        int32_t edi_7 = edi_6 & 3
                        int32_t ebp_3 = edi_6 & 0x30
                        i_11.b = ((esi_2 << 2 | esi_2) << 2 | esi_2 s>> 2 | esi_2)[edi]
                        i_11.b &= 0xcf
                        edi_5 = edi
                        i_11.b |= (((edi_7 << 2 | edi_7) << 2 | edi_7) << 2 | edi_7)[edi_5] u>> 2
                        i_11.b u>>= 2
                        i_11.b |= ((ebp_3 s>> 2 | ebp_3) s>> 2 | ebp_3 << 2 | ebp_3)[edi_5] & 0xc3
                        i_11.b u>>= 2
                        eax.b = *((((eax_53 s>> 2 | eax_53) s>> 2 | eax_53) s>> 2 | eax_53) + edi_5)
                            & 0xc0
                        i_11.b |= eax.b
                        *var_1c_2 = i_11.b
                        ebp_1 = var_1c_2 + 1
                        var_1c_2 = ebp_1
                        i = i_10
                        i_10 -= 1
                    while (i != 1)
                    edx_1 = arg2
                    i_11 = i_13
            
            eax.b = *(arg3 + 9)
            
            if (eax.b != 4)
                if (eax.b != 8)
                    if (eax.b == 0x10 && i_11 != 0)
                        uint32_t ecx_36 = zx.d(ecx.b)
                        arg4 = ecx_36
                        int32_t i_1
                        
                        do
                            uint32_t eax_80 = zx.d(edx_1[1])
                            edx_1 = &edx_1[2]
                            uint32_t ecx_38 = zx.d(*(*(esi + (eax_80 u>> ecx_36.b << 2))
                                + (zx.d(edx_1[0xfffffffe]) << 1)))
                            edx_1[0xffffffff] = ecx_38.b
                            ecx_36 = arg4
                            eax = ecx_38 u>> 8
                            edx_1[0xfffffffe] = eax.b
                            i_1 = i_11
                            i_11 -= 1
                        while (i_1 != 1)
                else if (i_11 != 0)
                    uint32_t eax_79
                    int32_t i_2
                    
                    do
                        eax_79 = zx.d(*edx_1)
                        edx_1 = &edx_1[1]
                        eax_79.b = *(eax_79 + edi_5)
                        edx_1[0xffffffff] = eax_79.b
                        i_2 = i_11
                        i_11 -= 1
                    while (i_2 != 1)
                    return eax_79
            else if (i_11 != 0)
                int32_t i_12 = ((i_11 - 1) u>> 1) + 1
                char* eax_78
                int32_t i_3
                
                do
                    uint32_t esi_3 = zx.d(*edx_1)
                    edx_1 = &edx_1[1]
                    int32_t esi_4 = esi_3 & 0xf
                    int32_t ecx_35 = esi_3 & 0xf0
                    ecx_35.b = (ecx_35 s>> 4 | ecx_35)[edi_5]
                    ecx_35.b &= 0xf0
                    eax_78.b = (esi_4 << 4 | esi_4)[edi_5]
                    eax_78.b u>>= 4
                    ecx_35.b |= eax_78.b
                    edx_1[0xffffffff] = ecx_35.b
                    i_3 = i_12
                    i_12 -= 1
                while (i_3 != 1)
                return eax_78
        case 2
            if (eax.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_1 = zx.d(ecx.b)
                    arg4 = ecx_1
                    uint8_t eax_21
                    int32_t i_4
                    
                    do
                        uint32_t eax_7 = zx.d(edx_1[1])
                        edx_1 = &edx_1[6]
                        uint32_t ecx_3 = zx.d(
                            *(*(esi + (eax_7 u>> ecx_1.b << 2)) + (zx.d(edx_1[0xfffffffa]) << 1)))
                        edx_1[0xfffffffb] = ecx_3.b
                        edx_1[0xfffffffa] = (ecx_3 u>> 8).b
                        uint32_t ecx_6 = zx.d(*(*(esi + (zx.d(edx_1[0xfffffffd]) u>> arg4.b << 2))
                            + (zx.d(edx_1[0xfffffffc]) << 1)))
                        edx_1[0xfffffffd] = ecx_6.b
                        edx_1[0xfffffffc] = (ecx_6 u>> 8).b
                        uint32_t ecx_9 = zx.d(*(*(esi + (zx.d(edx_1[0xffffffff]) u>> arg4.b << 2))
                            + (zx.d(edx_1[0xfffffffe]) << 1)))
                        edx_1[0xffffffff] = ecx_9.b
                        ecx_1 = arg4
                        eax_21 = (ecx_9 u>> 8).b
                        edx_1[0xfffffffe] = eax_21
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
                    return eax_21
            else if (i_11 != 0)
                char eax_6
                int32_t i_5
                
                do
                    uint32_t eax_1 = zx.d(*edx_1)
                    edx_1 = &edx_1[3]
                    edx_1[0xfffffffd] = *(eax_1 + edi)
                    edx_1[0xfffffffe] = *(zx.d(edx_1[0xfffffffe]) + edi)
                    eax_6 = *(zx.d(edx_1[0xffffffff]) + edi)
                    edx_1[0xffffffff] = eax_6
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
                return eax_6
        case 4
            if (eax.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_19 = zx.d(ecx.b)
                    arg4 = ecx_19
                    uint8_t eax_48
                    int32_t i_6
                    
                    do
                        uint32_t eax_44 = zx.d(edx_1[1])
                        edx_1 = &edx_1[4]
                        uint32_t ecx_21 = zx.d(
                            *(*(esi + (eax_44 u>> ecx_19.b << 2)) + (zx.d(edx_1[0xfffffffc]) << 1)))
                        edx_1[0xfffffffd] = ecx_21.b
                        ecx_19 = arg4
                        eax_48 = (ecx_21 u>> 8).b
                        edx_1[0xfffffffc] = eax_48
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
                    return eax_48
            else if (i_11 != 0)
                uint32_t eax_43
                int32_t i_7
                
                do
                    eax_43 = zx.d(*edx_1)
                    edx_1 = &edx_1[2]
                    eax_43.b = *(eax_43 + edi)
                    edx_1[0xfffffffe] = eax_43.b
                    i_7 = i_11
                    i_11 -= 1
                while (i_7 != 1)
                return eax_43
        case 6
            if (eax.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_10 = zx.d(ecx.b)
                    arg4 = ecx_10
                    uint8_t eax_42
                    int32_t i_8
                    
                    do
                        uint32_t eax_28 = zx.d(edx_1[1])
                        edx_1 = &edx_1[8]
                        uint32_t ecx_12 = zx.d(
                            *(*(esi + (eax_28 u>> ecx_10.b << 2)) + (zx.d(edx_1[0xfffffff8]) << 1)))
                        edx_1[0xfffffff9] = ecx_12.b
                        edx_1[0xfffffff8] = (ecx_12 u>> 8).b
                        uint32_t ecx_15 = zx.d(*(*(esi + (zx.d(edx_1[0xfffffffb]) u>> arg4.b << 2))
                            + (zx.d(edx_1[0xfffffffa]) << 1)))
                        edx_1[0xfffffffb] = ecx_15.b
                        edx_1[0xfffffffa] = (ecx_15 u>> 8).b
                        uint32_t ecx_18 = zx.d(*(*(esi + (zx.d(edx_1[0xfffffffd]) u>> arg4.b << 2))
                            + (zx.d(edx_1[0xfffffffc]) << 1)))
                        edx_1[0xfffffffd] = ecx_18.b
                        ecx_10 = arg4
                        eax_42 = (ecx_18 u>> 8).b
                        edx_1[0xfffffffc] = eax_42
                        i_8 = i_11
                        i_11 -= 1
                    while (i_8 != 1)
                    return eax_42
            else if (i_11 != 0)
                char eax_27
                int32_t i_9
                
                do
                    uint32_t eax_22 = zx.d(*edx_1)
                    edx_1 = &edx_1[4]
                    edx_1[0xfffffffc] = *(eax_22 + edi)
                    edx_1[0xfffffffd] = *(zx.d(edx_1[0xfffffffd]) + edi)
                    eax_27 = *(zx.d(edx_1[0xfffffffe]) + edi)
                    edx_1[0xfffffffe] = eax_27
                    i_9 = i_11
                    i_11 -= 1
                while (i_9 != 1)
                return eax_27
else if (eax.b == 0x10 && esi != 0)
    goto label_62ed95

return eax
