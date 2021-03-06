#ifndef _OUTPUT_GOOGLEMAP_HPP_
#define _OUTPUT_GOOGLEMAP_HPP_

#include "../bom/Session.h"
#include "Output.h"

namespace output
{
	class GoogleMap : public FileOutput
	{
		public:
			void dumpContent(std::ostream &out, const Session *session, std::map<std::string, std::string> &configuration) override;
			std::string getName() override { return "GoogleMap"; };
			std::string getExt() override { return "html"; };

			void dumpSessionSummary(std::ostream &out, const Session *session);

			template <typename T>
			void displayOptionalValue(std::ostream &out, Field<T> f, int width, const std::string& units) const;

		private:
			DECLARE_OUTPUT(GoogleMap);
	};
}

#endif
