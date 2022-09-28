
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace Buongiorno
{
    class BuongiornoRequests
    {
    public:
        AZ_RTTI(BuongiornoRequests, "78570604-cae6-4a8f-b4bf-b7c544dfa5ab");
        virtual ~BuongiornoRequests() = default;
        // Put your public methods here
    };
    
    class BuongiornoBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using BuongiornoRequestBus = AZ::EBus<BuongiornoRequests, BuongiornoBusTraits>;
    using BuongiornoInterface = AZ::Interface<BuongiornoRequests>;

} // namespace Buongiorno
