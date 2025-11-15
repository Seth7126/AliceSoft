// 函数: sub_622340
// 地址: 0x622340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 1
int32_t ecx = *(arg1 + 8)

if (ecx != 0)
    esi = ecx

while (true)
    if (esi - ecx u>= 1 && esi u>= 8)
        int32_t esi_1 = esi - ecx
        uint32_t ebx_1 = *(arg1 + 0xc) u>> 2
        char* eax_5 = sub_4046d0(ecx + esi_1)
        int32_t ecx_1 = *(arg1 + 4)
        uint32_t ebx_2 = ebx_1 << 2
        char* edx = ecx_1 + ebx_2
        void* ebx_3 = &eax_5[ebx_2]
        void* edi_3 = (*(arg1 + 8) << 2) - edx + ecx_1
        sub_6feca0(ebx_3, edx, edi_3)
        void* edx_1 = edi_3 + ebx_3
        uint32_t (* var_40)[0x4]
        uint32_t var_38
        uint32_t (* ebx_5)[0x4]
        
        if (ebx_1 u> esi_1)
            int32_t ebx_6 = esi_1 << 2
            sub_6feca0(edx_1, *(arg1 + 4), ebx_6)
            int32_t edi_7 = *(arg1 + 4)
            char* eax_12 = ebx_6 + edi_7
            void* edi_9 = edi_7 - eax_12 + (ebx_1 << 2)
            sub_6feca0(eax_5, eax_12, edi_9)
            var_38 = ebx_6
            ebx_5 = eax_5
            int32_t var_3c_1 = 0
            var_40 = edi_9 + ebx_5
        else
            uint32_t ebx_4 = ebx_1 << 2
            void* edi_6 = ebx_4
            sub_6feca0(edx_1, *(arg1 + 4), edi_6)
            _memset(edx_1 + edi_6, 0, (esi_1 - ebx_1) << 2)
            var_38 = ebx_4
            ebx_5 = eax_5
            int32_t var_3c = 0
            var_40 = ebx_5
        
        _memset(var_40, 0, var_38)
        void* result = *(arg1 + 4)
        
        if (result != 0)
            result = sub_403160(result, *(arg1 + 8), 4)
        
        *(arg1 + 4) = ebx_5
        *(arg1 + 8) += esi_1
        return result
    
    if (0xfffffff - esi u< esi)
        break
    
    esi *= 2

sub_6d0927("deque<T> too long")
noreturn
