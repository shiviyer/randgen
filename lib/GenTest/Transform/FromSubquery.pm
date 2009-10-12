package GenTest::Transform::FromSubquery;

require Exporter;
@ISA = qw(GenTest GenTest::Transform);

use strict;
use lib 'lib';

use GenTest;
use GenTest::Transform;
use GenTest::Constants;

sub transform {
	my ($class, $orig_query) = @_;

	$orig_query =~ s{SELECT (.*?) FROM (.*)}{SELECT * FROM ( SELECT $1 FROM $2 ) AS FROM_SUBQUERY }sio;
	return $orig_query." /* TRANSFORM_OUTCOME_UNORDERED_MATCH */";

}

1;