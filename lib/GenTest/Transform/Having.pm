package GenTest::Transform::Having;

require Exporter;
@ISA = qw(GenTest GenTest::Transform);

use strict;
use lib 'lib';

use GenTest;
use GenTest::Transform;
use GenTest::Constants;

sub transform {
	my ($class, $orig_query) = @_;

	if ($orig_query !~ m{HAVING}sio) {
		return STATUS_WONT_HANDLE;
	} else {
		$orig_query =~ s{HAVING.*(ORDER\s+BY|LIMIT|$)}{ $1}sio;
		return $orig_query." /* TRANSFORM_OUTCOME_SUPERSET */";
	}
}

1;